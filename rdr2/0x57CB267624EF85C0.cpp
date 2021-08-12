// fillet_sp.ysc @ L23844
void func_813(var uParam0, int iParam1, int iParam2)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;
  float fVar9;
  int iVar10;

  if (!func_199(iParam1))
  {
    return;
  }
  if (iParam2 < 0 || iParam2 >= 10)
  {
    return;
  }
  func_853(&(uParam0->f_592[iParam1 /*202*/]), uParam0->f_592[iParam1 /*202*/].f_201);
  vVar0 = { func_854(uParam0, iParam1, iParam2) };
  vVar0.x = (vVar0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-uParam0->f_527.f_64, uParam0->f_527.f_64));
  vVar0.f_1 = (vVar0.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-uParam0->f_527.f_64, uParam0->f_527.f_64));
  vVar3 = { 0f, 0f, -1f };
  vVar6 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
  vVar6 = { func_808(vVar6) };
  fVar9 = (uParam0->f_527.f_63 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.2f));
  iVar10 = uParam0->f_592[iParam1 /*202*/].f_201;
  uParam0->f_592[iParam1 /*202*/].f_180[iVar10] = GRAPHICS::ADD_DECAL(-199919112, vVar0, vVar3, vVar6, fVar9, fVar9, 0.03f, 0.2f, 0f, 0f, 1f, -1f, 0, 0, 1, 1);
  uParam0->f_592[iParam1 /*202*/].f_201++;
  if (uParam0->f_592[iParam1 /*202*/].f_201 >= 20)
  {
    uParam0->f_592[iParam1 /*202*/].f_201 = 0;
  }
}