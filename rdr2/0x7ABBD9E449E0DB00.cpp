// rcm_crawley1.ysc @ L18947
void func_629(int iParam0)
{
  EVENT::SET_DECISION_MAKER(iParam0, joaat("EMPTY"));
  PED::SET_PED_CONFIG_FLAG(iParam0, 81, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
  PED::SET_PED_CONFIG_FLAG(iParam0, 168, true);
  PED::_0x7ABBD9E449E0DB00(iParam0, 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_ENEMY"));
  EVENT::_0xBB1E41DD3D3C6250(iParam0, "SpDefaultStealth", 0);
  EVENT::_0x1A5C5D350068A673(iParam0, 0);
}