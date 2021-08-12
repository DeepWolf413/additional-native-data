// freemode.ysc @ L925525
void func_13778()
{
  if ((((((func_169(PLAYER::PLAYER_ID(), 1, 0) || func_3872()) || !func_178(PLAYER::PLAYER_ID())) || func_1681()) || func_8932(0, 2483)) || func_10455()) || func_8932(8, 2483))
  {
    func_13779();
  }
  else
  {
    if (!HUD::DOES_BLIP_EXIST(uLocal_12841[0]))
    {
      uLocal_12841[0] = func_7000(50.9f, -1392.7f, 28.9f, 0);
      HUD::SET_BLIP_SPRITE(uLocal_12841[0], 100);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_12841[0], "MP_CARWASH");
      HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_12841[0], true);
      HUD::SET_BLIP_HIGH_DETAIL(uLocal_12841[0], false);
    }
    if (!HUD::DOES_BLIP_EXIST(uLocal_12841[1]))
    {
      uLocal_12841[1] = func_7000(-699.7f, -922.9f, 18.5f, 0);
      HUD::SET_BLIP_SPRITE(uLocal_12841[1], 100);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_12841[1], "MP_CARWASH");
      HUD::SET_BLIP_AS_SHORT_RANGE(uLocal_12841[1], true);
      HUD::SET_BLIP_HIGH_DETAIL(uLocal_12841[1], false);
    }
  }
}