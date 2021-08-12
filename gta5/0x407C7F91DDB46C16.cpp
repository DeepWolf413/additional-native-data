// fm_mission_controller.ysc @ L700552
int func_11689()
{
  if (PLAYER::GET_NUMBER_OF_PLAYERS() > 1)
  {
    if (func_11686() != func_9989())
    {
      Global_2518590 = 1;
      return 1;
    }
  }
  Global_2518590 = 0;
  return 0;
}