// beat_rat_infestation.ysc @ L20089
void func_617(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
  if (func_58(iParam0, 0, 1) && VOLUME::_DOES_VOLUME_EXIST(iParam1))
  {
    TASK::TASK_WANDER_IN_VOLUME(iParam0, iParam1, iParam2, iParam3, iParam4);
  }
}