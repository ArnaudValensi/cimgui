#ifdef CIMGUI_USE_OPENGL3
CIMGUI_API bool ImGui_ImplOpenGL3_Init(const char* glsl_version);
CIMGUI_API void ImGui_ImplOpenGL3_Shutdown(void);
CIMGUI_API void ImGui_ImplOpenGL3_NewFrame(void);
CIMGUI_API void ImGui_ImplOpenGL3_RenderDrawData(ImDrawData* draw_data);
CIMGUI_API bool ImGui_ImplOpenGL3_CreateFontsTexture(void);
CIMGUI_API void ImGui_ImplOpenGL3_DestroyFontsTexture(void);
CIMGUI_API bool ImGui_ImplOpenGL3_CreateDeviceObjects(void);
CIMGUI_API void ImGui_ImplOpenGL3_DestroyDeviceObjects(void);

#endif
#ifdef CIMGUI_USE_SDL2

typedef struct SDL_Window SDL_Window;
typedef struct SDL_Renderer SDL_Renderer;
struct SDL_Window;
struct SDL_Renderer;
typedef union SDL_Event SDL_Event;CIMGUI_API bool ImGui_ImplSDL2_InitForOpenGL(SDL_Window* window,void* sdl_gl_context);
CIMGUI_API bool ImGui_ImplSDL2_InitForVulkan(SDL_Window* window);
CIMGUI_API bool ImGui_ImplSDL2_InitForD3D(SDL_Window* window);
CIMGUI_API bool ImGui_ImplSDL2_InitForMetal(SDL_Window* window);
CIMGUI_API bool ImGui_ImplSDL2_InitForSDLRenderer(SDL_Window* window,SDL_Renderer* renderer);
CIMGUI_API void ImGui_ImplSDL2_Shutdown(void);
CIMGUI_API void ImGui_ImplSDL2_NewFrame(void);
CIMGUI_API bool ImGui_ImplSDL2_ProcessEvent(const SDL_Event* event);

#endif
