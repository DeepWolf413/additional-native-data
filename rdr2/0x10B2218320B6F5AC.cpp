// industry3.ysc @ L38939
int func_861(char[4] cParam0)
{
  if (!func_8(cParam0, 8))
  {
    ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[11], "CS_JavierEscuella", Local_1571[1 /*10*/], 0);
    ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1720[11], "S_M_M_NBXRIVERBOATGUARDS_01", Local_79[5 /*10*/], 0);
    ANIMSCENE::START_ANIM_SCENE(iLocal_1720[11]);
    func_1485();
  }
  iLocal_1809 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(Local_370[11 /*10*/], true, false), 0f, 0f, 0f, 0.9f, 0.9f, 1f);
  PED::_0x7C00CFC48A782DC0(iLocal_1809, Local_370[11 /*10*/], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
  func_1487();
  PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 96, true);
  PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 250, true);
  PED::SET_PED_CONFIG_FLAG(Local_370[11 /*10*/], 143, true);
  ENTITY::CREATE_MODEL_SWAP(3288.448f, -1312.786f, 41.773f, 1f, iLocal_31, iLocal_32, true);
  return 1;
}