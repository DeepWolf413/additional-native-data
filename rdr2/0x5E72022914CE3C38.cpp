// beechers2_2.ysc @ L66492
void func_1656()
{
  float fVar0;
  float fVar1;
  bool bVar2;

  if (fLocal_1069 > 0.85f)
  {
    fLocal_1069 = 1f;
  }
  if (fLocal_1069 > fLocal_1068)
  {
    fLocal_1068 = (fLocal_1068 + (MISC::GET_FRAME_TIME() * 0.02f));
  }
  else if (fLocal_1069 < fLocal_1068)
  {
    fLocal_1068 = (fLocal_1068 - (MISC::GET_FRAME_TIME() * 0.02f));
  }
  fLocal_1068 = func_453(fLocal_1068, 0f, 1.1f);
  fVar0 = MISC::ABSF((fLocal_1068 - fLocal_1069));
  bVar2 = fLocal_1069 > fLocal_1068;
  fVar1 = (fVar0 * func_1452(bVar2, (0.5f * MISC::GET_FRAME_TIME()), (0.3f * MISC::GET_FRAME_TIME())));
  fLocal_1068 = (fLocal_1068 + func_1452(bVar2, fVar1, -fVar1));
  fLocal_1068 = func_453(fLocal_1068, 0f, 1f);
}