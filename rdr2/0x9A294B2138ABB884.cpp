// beat_gold_panner.ysc @ L2802
void func_85()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 4)
  {
    iLocal_438[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_74(), func_13(&Local_15), true, true, false, true);
    iVar0++;
  }
}