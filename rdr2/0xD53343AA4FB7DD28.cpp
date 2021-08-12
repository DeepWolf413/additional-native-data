// abigail2_1.ysc @ L14999
void func_75(char[4] cParam0)
{
  int iVar0;
  float fVar1;
  float fVar2;

  iVar0 = 0;
  if (func_274(cParam0))
  {
    fVar1 = BUILTIN::TO_FLOAT((LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX()) - Global_2621440[0 /*12066*/].f_9.f_20));
    if (fVar1 > 0f)
    {
      fVar2 = (1f + (BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(50, 200)) / 1000f));
      iVar0 = (iVar0 + BUILTIN::ROUND((fVar1 * fVar2)));
    }
  }
  func_275(iVar0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
}