// achievement_controller.ysc @ L14268
int func_121()
{
  int iVar0;
  
  if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
  {
    return 0;
  }
  iVar0 = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();
  if (iVar0 > 0)
  {
    if (Global_31610 < iVar0)
    {
      if (Global_31610 >= 0)
      {
        func_136(22, iVar0);
      }
      Global_31610 = iVar0;
    }
  }
  if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
  {
    func_130(22, 1);
    return 1;
  }
  return 0;
}