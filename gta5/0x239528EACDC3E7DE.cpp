// am_lowrider_int.ysc @ L75944
void func_413()
{
  func_6();
  if (HUD::DOES_BLIP_EXIST(Global_1669304))
  {
    HUD::SET_BLIP_ROUTE(Global_1669304, false);
    HUD::REMOVE_BLIP(&Global_1669304);
  }
  func_380(31, 0);
  func_417();
  PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
  if (func_416())
  {
    func_415();
  }
  CUTSCENE::REMOVE_CUTSCENE();
  func_395();
  func_394(0);
  func_21(0);
  func_414();
}