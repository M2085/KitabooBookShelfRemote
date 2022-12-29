// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "KitabooBookShelfRemote",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "KitabooBookShelfRemote",
            targets: ["KitabooBookShelfRemote", "KitabooBookShelfFramework", "Kitaboo_Reader_SDK", "KitabooSDKWithReader"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
//        .binaryTarget(name: "KitabooBookShelf", path: "./Sources/KitabooBookShelf.xcframework"),
//        .binaryTarget(name: "Kitaboo_Reader_SDK", path: "./Sources/Kitaboo_Reader_SDK.xcframework"),
//        .binaryTarget(name: "KitabooSDKWithReader", path: "./Sources/KitabooSDKWithReader.xcframework"),
        
        .binaryTarget(name: "KitabooBookShelfFramework", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooBookShelfFramework.xcframework.zip", checksum: "e657c0f4c73d3b658ed197392c6b6d9334e0fc3d3f71ef41cca0d31863e82ff6"),
        .binaryTarget(name: "Kitaboo_Reader_SDK", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/Kitaboo_Reader_SDK.xcframework.zip", checksum: "04a730bf73be95bc448cde66461a28a105cf50a81f579b7283bc137471c27e54"),
        .binaryTarget(name: "KitabooSDKWithReader", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooSDKWithReader.xcframework.zip", checksum: "a4694685836fb07745d165d633856e20f9f6dfe0907ac1b819563f91fd277898"),
        .target(
            name: "KitabooBookShelfRemote",
            dependencies: []),
        .testTarget(
            name: "KitabooBookShelfRemoteTests",
            dependencies: ["KitabooBookShelfRemote"]),
    ]
)
