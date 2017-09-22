#include "Ctu.h"

uint32_t nn::settings::ISystemSettingsServer::GetSettingsItemValue(IN nn::settings::SettingsName* cls, guint cls_size, IN nn::settings::SettingsItemKey* key, guint key_size, OUT uint64_t& size, OUT uint8_t* data, guint data_size) {
	LOG_DEBUG(Settings, "Attempting to read setting %s!%s", cls, key);
	memset(data, 0, data_size);
	size = data_size;
	return 0;
}

uint32_t nn::settings::ISystemSettingsServer::GetMiiAuthorId(OUT nn::util::Uuid& _0) {
	auto buf = (uint64_t *) &_0;
	buf[0] = 0xdeadbeefcafebabe;
	buf[1] = 0x000000d00db3c001;
	return 0;
}
