// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PonyDebugger",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "PonyDebugger",
            targets: ["PonyDebugger"]
        ),
    ],
    dependencies: [
        .package(url: "https://github.com/baseco/SocketRocket.git", .revision("00a4c0fcfb37e1e1699ea0aaeba6c9b2b6a94abf"))
    ],
    targets: [
        .target(
            name: "PonyDebugger",
            dependencies: ["SocketRocket"],
            path: "ObjC",
            sources: ["DerivedSources", "PonyDebugger"],
            publicHeadersPath: "PonyDebugger",
            cSettings: [
                .headerSearchPath("DerivedSources"),
                .define("ENABLE_NS_ASSERTIONS", to: "YES"),
                .define("SWIFTPM", to: "1"),
                .unsafeFlags(["-fno-objc-arc"])
            ],
            linkerSettings: [
                .linkedFramework("CoreData"),
                .linkedFramework("CoreGraphics")
            ]
        )
    ]
)
