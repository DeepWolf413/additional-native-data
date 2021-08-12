// cellphone_controller.ysc @ L663
void func_5()
{
  Global_22165 = -1;
  if (Global_77248)
  {
    if (func_7())
    {
      GRAPHICS::_0xF3F776ADA161E47D(Global_4456448.f_127873, Global_4456448.f_127873.f_1);
    }
    if (func_6(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_435), 0))
    {
      GRAPHICS::_0xADD6627C4D325458(1);
    }
    else
    {
      GRAPHICS::_0xADD6627C4D325458(0);
    }
  }
  if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_22165))
  {
    Global_22160 = 10;
    HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278");
    HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
  }
  else
  {
    func_14();
  }
}