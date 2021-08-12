// rcm_serial_killer1.ysc @ L3311
int func_103(var uParam0)
{
  iLocal_378 = 0;
  switch (iLocal_377)
  {
    case 0:
      bLocal_51 = true;
      func_327();
      if (func_210() && !ENTITY::IS_ENTITY_DEAD(iLocal_143))
      {
        TASK::_0x9EBD34958AB6F824(iLocal_140);
        TASK::UNCUFF_PED(iLocal_140);
        PED::_0x7E8F9949B7AABBF0(iLocal_140, 1, 1);
        func_328(0, 0);
      }
      PED::SET_PED_CAN_BE_TARGETTED(iLocal_143, false);
      PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDMUND"));
      func_329(&iLocal_130);
      func_307(uParam0, Local_396[8 /*9*/].f_2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
      func_330(1);
      func_296(uParam0, iLocal_374, 11);
      return 7;
  }
  return 7;
}