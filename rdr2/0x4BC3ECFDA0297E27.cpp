// butchercreek.ysc @ L1276
void func_58()
{
  int iVar0;
  int iVar1;
  int iVar2;

  if ((MISC::GET_FRAME_COUNT() % 30) != 0)
  {
    return;
  }
  iVar0 = func_96(679);
  iVar1 = func_96(680);
  iVar2 = func_96(681);
  if (func_97(iVar0, 0) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 73) != 0.15f)
  {
    FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 73, 0.15f);
  }
  if (func_97(iVar1, 0) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 73) != 0.15f)
  {
    FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar1, 73, 0.15f);
  }
  if (func_97(iVar2, 0) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iVar2, 73) != 0.15f)
  {
    FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar2, 73, 0.15f);
  }
}