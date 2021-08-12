// fm_mission_controller.ysc @ L573296
void func_9421(int iParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (Global_4718592.f_61824 - 1))
  {
    if (iVar0 < 60)
    {
      if (OBJECT::DOES_PICKUP_EXIST(iLocal_7135[iVar0]))
      {
        OBJECT::SET_PICKUP_UNCOLLECTABLE(iLocal_7135[iVar0], iParam0);
      }
    }
    iVar0++;
  }
}