#include "mainapp.h"

MainApp::MainApp()
{
	this->AppRun();
}
void MainApp::AppRun()
{

	ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.
	ImGui::Text("imGUI is setup");
	ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);

}

MainApp::~MainApp() {
	ImGui::End();
}