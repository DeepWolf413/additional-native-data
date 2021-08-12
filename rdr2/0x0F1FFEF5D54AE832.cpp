// mudtown3b.ysc @ L49982
void func_1251(var uParam0)
{
  if (func_943(Global_35, 0))
  {
    if (bLocal_2403)
    {
      if (func_1226(uParam0) > 0 || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::GET_PLAYER_INDEX()))
      {
        bLocal_2403 = false;
      }
      else
      {
        CAM::_0x0F1FFEF5D54AE832();
        HUD::_0xC9CAEAEEC1256E54(-1679307491);
        HUD::_0xC9CAEAEEC1256E54(1058184710);
      }
    }
  }
}