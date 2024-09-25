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
        .package(url: "https://github.com/baseco/SocketRocket.git", .revision("38b16a44cc69423b733d4ea818522ae849871ab5"))
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
