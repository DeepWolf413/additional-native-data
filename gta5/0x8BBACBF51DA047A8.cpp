// pilot_school.ysc @ L101795
int func_720()
{
  CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Local_870.f_6);
  if (func_725())
  {
    switch (iLocal_1467)
    {
      case 2:
        func_724();
        func_722("PS_PREV10", "PS_PREV10_1", "PS_PREV10_2", "PS_PREV10_3", "PS_PREV10_4", "PS_PREV10_5");
        break;
      
      case 3:
        func_721();
        break;
      
      case 4:
        break;
      
      case 5:
        break;
    }
    return 1;
  }
  return 0;
}