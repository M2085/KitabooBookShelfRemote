import XCTest
@testable import KitabooBookShelfRemote

final class KitabooBookShelfRemoteTests: XCTestCase {
    func testExample() throws {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(KitabooBookShelfLocal().text, "Hello, World!")
    }
}
