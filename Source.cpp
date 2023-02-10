#include "MyBans/sdk/amxxmodule.h"
/* #include <curl/curl.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

enum MsgParams {
    CONTENT = 0,
    AUTHOR_NAME,
    AUTHOR_URL,
    AUTHOR_ICON_URL,
    TITLE,
    TITLE_URL,
    DESCRIPTION,
    COLOR,
    THUMBNAIL_URL,
    IMAGE_URL,
    FOTTER_TEXT,
    FOTTER_ICON_URL
};

// native send_dc();
cell AMX_NATIVE_CALL Discord_Open2(AMX *amx, cell *params)
{
    // int index = params[1];
    MF_Log("Enviando Curl");
    CURL* curl;
    CURLcode res;

    curl_global_init(CURL_GLOBAL_ALL);

    curl = curl_easy_init();

    if (curl) {
        struct curl_slist* list = NULL;
        list = curl_slist_append(list, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0);
        curl_easy_setopt(curl, CURLOPT_SSLVERSION, CURL_SSLVERSION_TLSv1);
        curl_easy_setopt(curl, CURLOPT_URL, "https://discord.com/api/webhooks/1072935654704549928/21yk3pXAGUC_rRhahartg-WrV9XTF-MKDukEU5vidnjCnKTeCHLXFxrhCL_NDbEut-qj");
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, list);
        curl_easy_setopt(curl, CURLOPT_COPYPOSTFIELDS, "{\"content\": \"Holaaaaaaa\"}");

        res = curl_easy_perform(curl);
        curl_slist_free_all(list);

        if (res != CURLE_OK)
            MF_Log("curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        MF_Log("Enviado");

        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();

    return 1;
}

cell AMX_NATIVE_CALL dcwh_embed_init(AMX* amx, cell* params) {
    json data;
    return data;
}

cell AMX_NATIVE_CALL dcwh_embed_set(AMX* amx, cell* params) {
    json data = params[1];
    return data;
}

// native dcwh_sendmsg(const szWebHook[], const Json)
cell AMX_NATIVE_CALL dcwh_sendmsg(AMX* amx, cell* params) {
    json data;

    data["sd"] = "sd";

}

AMX_NATIVE_INFO DCWHNatives[] = {
    {"dcwh_sendmsg", dcwh_sendmsg},
    {NULL, NULL},
};*/

void OnAmxxAttach() {
    MF_Log("Registrando native");
    // MF_AddNatives(DCWHNatives);
}