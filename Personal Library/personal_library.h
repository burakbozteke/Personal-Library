#pragma once

#ifdef PERSONALLIBRARY_EXPORTS
#define PERSONALLIBRARY_API __declspec(dllexport)
#else
 #define PERSONALLIBRARY_API __declspec(dllimport)
#endif // PERSONALLIBRARY_EXPORTS

extern "C" PERSONALLIBRARY_API void veriler(const unsigned int a, const unsigned int b);
extern "C" PERSONALLIBRARY_API int topla();
extern "C" PERSONALLIBRARY_API int cikart();
extern "C" PERSONALLIBRARY_API int carp();
extern "C" PERSONALLIBRARY_API int bol();
extern "C" PERSONALLIBRARY_API unsigned islem_sayisi();
extern "C" PERSONALLIBRARY_API const char* test();
extern "C" PERSONALLIBRARY_API const char* cevir(const char* metin, const char* kaynakDil, const char* hedefDil);
