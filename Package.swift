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
        
        .binaryTarget(name: "KitabooBookShelfFramework", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooBookShelfFramework.xcframework.zip", checksum: "ed8acc1b5df2763a574a7b9a8138438610b0d611d8ef270d1d86a116d46396b3"),
        .binaryTarget(name: "Kitaboo_Reader_SDK", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/Kitaboo_Reader_SDK.xcframework.zip", checksum: "e6bc0458b749743d4d43d9154245f1d9d5067095afb0028d7ab5e3f066b2990e"),
        .binaryTarget(name: "KitabooSDKWithReader", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooSDKWithReader.xcframework.zip", checksum: "f986cc54700aa8b4ff75ef29910d0900b6b5f1cafb4ed600e60d67c24257a044"),
        .target(
            name: "KitabooBookShelfRemote",
            dependencies: []),
        .testTarget(
            name: "KitabooBookShelfRemoteTests",
            dependencies: ["KitabooBookShelfRemote"]),
    ]
)
