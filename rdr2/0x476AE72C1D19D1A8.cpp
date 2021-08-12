// beat_moonshine_camp.ysc @ L3911
void func_114()
{
  func_282(&(Local_95.f_5), iLocal_84[0], 0);
  func_282(&(Local_95.f_5), iLocal_84[1], 0);
  if (func_80(Local_297[0 /*32*/].f_11, 0, 1))
  {
    func_283(Local_297[0 /*32*/].f_11, 0);
    func_284(&(Local_95.f_5), Local_297[0 /*32*/].f_11, 0);
  }
  func_285(iLocal_84[0], joaat("GROUP_PISTOL"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
  func_285(iLocal_84[1], joaat("GROUP_PISTOL"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
  WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_84[1], false);
  PED::ADD_RELATIONSHIP_GROUP("relGroupMoonshiner", &iLocal_1083);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_84[0], iLocal_1083);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_84[1], iLocal_1083);
  AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_84[0], &(Local_297[0 /*32*/].f_23));
  AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_84[1], &(Local_297[1 /*32*/].f_23));
  if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_624[0]))
  {
    uLocal_624[0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Local_95.f_51, 0f, 0f, 0f, 0.9f, 0.9f, 0.9f);
    PED::_0x7C00CFC48A782DC0(uLocal_624[0], iLocal_84[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
  }
  func_286(iLocal_84[0], &Local_95, 0);
  func_286(iLocal_84[1], &Local_95, 0);
}