// train_fast_travel_core.ysc @ L263
int func_7()
{
  LAW::_0xE94B5E938619712E();
  if (!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(Global_1425371[iLocal_99 /*373*/].f_1)))
  {
    VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
    VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
    if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
    {
      return 8;
    }
    return -1;
  }
  else
  {
    iLocal_97 = VEHICLE::_0x6E585A616ABB8401(Global_1425371[iLocal_99 /*373*/].f_1);
    VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
    VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
    if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iLocal_99 /*373*/].f_1))
    {
      VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
      VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
    }
  }
  if (!VEHICLE::_0xBD3C4A2ED509205E(iLocal_97))
  {
    return -1;
  }
  return 2;
}