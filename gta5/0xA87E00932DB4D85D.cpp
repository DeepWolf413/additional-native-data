// am_mp_casino_nightclub.ysc @ L369183
void func_5273(var uParam0)
{
  float fVar0;
  
  if (!func_4801(&(uParam0->f_651)) || func_4798(&(uParam0->f_651), 0, 0))
  {
    return;
  }
  fVar0 = func_5129(uParam0->f_673, 0.3f, (SYSTEM::TO_FLOAT(func_5208(&(uParam0->f_651), 0, 0)) / SYSTEM::TO_FLOAT(0)));
  CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fVar0);
}