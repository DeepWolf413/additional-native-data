// guama3.ysc @ L51800
void func_1201()
{
  switch (iLocal_4905)
  {
    case 0:
      PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), Local_121[3 /*49*/], -1082130432 /* Float: -1f */);
      PLAYER::_0xBA5CA1FEB5DE0DF6(PLAYER::PLAYER_ID(), "guama_3_artillery01_micah_0", 5f, 10f, 15f, 20f);
      if ((iLocal_33 >= 2 || bLocal_4780) || iLocal_31 >= 1)
      {
        PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
        PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
        iLocal_4905 = 1;
      }
      break;
    case 1:
      break;
    case 2:
      break;
  }
}