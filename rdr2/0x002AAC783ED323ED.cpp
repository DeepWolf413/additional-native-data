// mob4.ysc @ L38851
bool func_890()
{
  if (!func_1517(&Local_694, func_212(6, 1), iLocal_19, 1, 0, 4000, 0, 1))
  {
    return false;
  }
  Local_694.f_2 = Global_35;
  func_1518(&Local_694, 1);
  func_1344(Local_694, 0);
  func_1519(Local_694, 1, 1);
  MAP::ALLOW_SONAR_BLIPS(true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_694, true);
  ENTITY::SET_ENTITY_MAX_HEALTH(Local_694, 5000);
  ENTITY::_SET_ENTITY_HEALTH(Local_694, 5000, 0);
  PED::SET_PED_CONFIG_FLAG(Local_694, 263, true);
  PED::SET_PED_CONFIG_FLAG(Local_694, 138, false);
  PED::SET_PED_CONFIG_FLAG(Local_694, 179, true);
  PED::_0x0F967019CC853BCC(Local_694, 21030);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_694, true, 0f);
  ENTITY::_0x002AAC783ED323ED(Local_694, 1);
  ENTITY::SET_ENTITY_PROOFS(Local_694, 4, false);
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_694, true);
  return true;
}