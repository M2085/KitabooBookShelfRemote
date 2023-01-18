// swift-tools-version: 5.5
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
        
        .binaryTarget(name: "KitabooBookShelfFramework", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooBookShelfFramework.xcframework.zip", checksum: "5355534f1cd85057c23b993b1eae7b6d06c1db08a3c6337379dfa98f458b2803"),
        .binaryTarget(name: "Kitaboo_Reader_SDK", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/Kitaboo_Reader_SDK.xcframework.zip", checksum: "47c0edd175b670b0f54acbd451ddb27ca27a399d1d7ce50ccb5a0a66daed1d7c"),
        .binaryTarget(name: "KitabooSDKWithReader", url: "https://qaread.kitaboo.com/reader/Sprint/githubfiles/GithubZip/KitabooSDKWithReader.xcframework.zip", checksum: "50399b94fcfb37ca74de8ff26727f385f6abe874c6e1a93911cbd74c42f536e1"),
        .target(
            name: "KitabooBookShelfRemote",
            dependencies: []),
        .testTarget(
            name: "KitabooBookShelfRemoteTests",
            dependencies: ["KitabooBookShelfRemote"]),
    ]
)

