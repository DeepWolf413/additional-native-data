// autosave_controller.ysc @ L509
void func_12(bool bParam0, bool bParam1, bool bParam2)
{
  var uVar0;
  var uVar3;
  
  func_382();
  func_371();
  func_56();
  if (bParam2)
  {
    MISC::SET_BIT(&(Global_112293.f_10014.f_25), 4);
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_112293.f_10014.f_25), 4);
  }
  Global_112293.f_7686.f_924 = MISC::GET_GAME_TIMER();
  if (Global_77510 == 62 || Global_77511 == 62)
  {
    func_13(2, 1);
  }
  if (!bParam0)
  {
    Global_99409.f_8 = 0;
    Global_112293.f_10014.f_23 = 0;
    Global_112293.f_10014.f_24 = 0;
  }
  MISC::OVERRIDE_SAVE_HOUSE(bParam1, Global_112293.f_25082, Global_112293.f_25082.f_3, bParam0, &uVar0, &uVar3);
}