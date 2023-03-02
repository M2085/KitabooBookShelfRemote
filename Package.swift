// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "KitabooBookShelfRemote",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "KitabooBookShelfRemote",
            targets: ["KitabooBookShelfRemote"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(name: "KitabooBookShelfFramework", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooBookShelfFramework.xcframework.zip", checksum: "50d65506e882edf39016557f0974cfd4e0a127bf19da3824035e23cb366d1c94"),
        
        .binaryTarget(name: "Kitaboo_Reader_SDK", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/Kitaboo_Reader_SDK.xcframework.zip", checksum: "e6f463d4bcb809dd9ab822520ebfcf96841e5a4e7c3971259cbf9ac3cd5166d0"),
        
        .binaryTarget(name: "KitabooSDKWithReader", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooSDKWithReader.xcframework.zip", checksum: "92fd73de15a226b8892160bc768ce7c6b30f1efa55e939f56bedbd7d064c48f4"),
        .target(
            name: "KitabooBookShelfRemote",
            dependencies: ["Kitaboo_Reader_SDK", "KitabooSDKWithReader","KitabooBookShelfFramework"]),
        .testTarget(
            name: "KitabooBookShelfRemoteTests",
            dependencies: ["KitabooBookShelfRemote"]),
    ]
)
