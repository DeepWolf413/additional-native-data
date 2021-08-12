// rcm_monroe11.ysc @ L37911
void func_1260(var uParam0)
{
  float fVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  if (func_753(uParam0->f_291[0], 1199744105))
  {
    fVar0 = func_652(uParam0->f_321);
    fVar1 = fVar0;
    fVar2 = func_615(Global_35, uParam0->f_319[0], 1, 1);
    fVar2 = func_1745(fVar2, 0f, 20f);
    if (fVar2 <= 10f)
    {
      fVar4 = 1f;
    }
    else if (fVar2 > 20f)
    {
      fVar4 = 0.6f;
    }
    else
    {
      fVar3 = (fVar2 / 20f);
      fVar4 = (0.6f + ((1f - fVar3) * (1f - 0.6f)));
    }
    fVar1 = (fVar1 * fVar4);
    TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(uParam0->f_291[0], fVar1);
  }
}