// achievement_controller.ysc @ L14245
int func_120()
{
  int iVar0;
  int iVar1;
  
  if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
  {
    return 0;
  }
  iVar0 = 0;
  iVar1 = 0;
  iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("first_person_cam_time")) * 24);
  iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("first_person_cam_time")));
  iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("mp_first_person_cam_time")) * 24);
  iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("mp_first_person_cam_time")));
  if ((iVar0 + iVar1) >= 15)
  {
    func_130(50, 1);
    return 1;
  }
  return 0;
}