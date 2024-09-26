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
        .package(path: "SocketRocket")
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
                .headerSearchPath("SocketRocket"),
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
