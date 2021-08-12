// beat_lost_drunk.ysc @ L805
bool func_21()
{
  if (!func_55(iLocal_325[0], 0, 1))
  {
    iLocal_325[0] = func_83(Local_21[0 /*32*/].f_1, &(Local_21[0 /*32*/]), Local_131.f_51, Local_21[0 /*32*/].f_9, 1, 0, 1, 0, 1);
  }
  else
  {
    WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_325[0], true, true);
    AUDIO::SET_PED_IS_DRUNK(iLocal_325[0], true);
    PED::_0x406CCF555B04FAD3(iLocal_325[0], 1, 1065353216 /* Float: 1f */);
    PED::_0x89F5E7ADECCCB49C(iLocal_325[0], "very_drunk");
    PED::SET_PED_CONFIG_FLAG(iLocal_325[0], 146, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_325[0], 265, true);
    PED::SET_PED_MAX_TIME_IN_WATER(iLocal_325[0], 3f);
    PED::SET_PED_CONFIG_FLAG(iLocal_325[0], 411, true);
    iLocal_562 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iLocal_325[0], true, false), 0f, 0f, 0f, 3f, 3f, 3f);
    POPULATION::_0xB56D41A694E42E86(iLocal_562, 0, 589824, 0, -1, -1, 2);
    PED::_0x7C00CFC48A782DC0(iLocal_562, iLocal_325[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
    func_84(iLocal_325[0], &Local_131, 0);
    PED::_0x58D32261AE0F0843(iLocal_325[0], 14412, -0.056234f, -0.093714f, 0.386692f, -0.047381f, -0.894152f, 0.44525f, "PD_Vomit");
    PED::_0x58D32261AE0F0843(iLocal_325[0], 14414, -0.064843f, -0.075651f, 0.415049f, 4.9E-05f, -0.984825f, -0.173547f, "PD_Mud_Bits");
    PED::_0x58D32261AE0F0843(iLocal_325[0], 14283, 0.04363f, -0.02311f, 0.57408f, 0.774536f, -0.607681f, -0.175551f, "PD_MudDry");
    PED::_0x58D32261AE0F0843(iLocal_325[0], 55120, 0.137435f, -0.052883f, -0.484834f, 0.189161f, -0.975798f, -0.109715f, "PD_MudWet_Body_NoFade");
    PED::_0x58D32261AE0F0843(iLocal_325[0], 43312, -0.130166f, -0.052288f, -0.497298f, -0.043016f, -0.991518f, -0.122645f, "PD_MudWet_Body_NoFade");
    func_87(iLocal_325[0], joaat("WORLD_HUMAN_DRUNK_BRACE_WALL_NO_VOMIT"), func_85(&Local_131), func_86(&Local_131), -1, 0, 1, 0, -1082130432 /* Float: -1f */);
    return true;
  }
  return false;
}