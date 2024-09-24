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
        .package(url: "https://github.com/baseco/SocketRocket.git", .branch("master"))
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
                .define("ENABLE_NS_ASSERTIONS", to: "YES")
            ],
            linkerSettings: [
                .linkedFramework("CoreData"),
                .linkedFramework("CoreGraphics")
            ]
        )
    ]
)
