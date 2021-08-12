// finale1.ysc @ L38890
bool func_841(var uParam0)
{
  func_27(&(vLocal_1539[2 /*3*/]), 1);
  func_27(&(vLocal_1539[3 /*3*/]), 1);
  PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Global_35, 1);
  PED::_0xC2266AA617668AD3(iLocal_1486, 0.5f);
  func_1463(iLocal_1486, 1f, 0);
  PED::_0xC2266AA617668AD3(Local_225[0 /*9*/].f_1, 0.5f);
  func_1463(Local_225[0 /*9*/].f_1, 1f, 0);
  PED::_0xD05AD61F242C626B(Global_35, 10f);
  func_403(uParam0, 50);
  func_1379(uParam0);
  func_99(uParam0, 33554432);
  func_1374(uParam0, "1-HighHonor");
  func_1374(uParam0, "2-LowHonor");
  PED::_0xE6CB36F43A95D75F(1f);
  PED::SET_PED_CONFIG_FLAG(Global_35, 380, true);
  PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1.25f);
  AITRANSPORT::_0x5639FBEA922788DA(Global_35);
  ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1486, true);
  ENTITY::SET_ENTITY_PROOFS(iLocal_1486, 6, false);
  ENTITY::SET_ENTITY_PROOFS(Local_225[0 /*9*/].f_1, 6, false);
  return uParam0->f_607 == uParam0->f_607;
}