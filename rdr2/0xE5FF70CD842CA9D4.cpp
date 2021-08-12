// fishing_core.ysc @ L8864
void func_361(var uParam0, int iParam1)
{
  char* sVar0;
  float fVar1;
  int iVar2;

  iVar2 = 0;
  iVar2 = 0;
  while (iVar2 < 15)
  {
    sVar0 = func_379(iVar2);
    fVar1 = 0f;
    if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && DECORATOR::DECOR_EXIST_ON(iParam1, sVar0))
    {
      fVar1 = DECORATOR::DECOR_GET_FLOAT(iParam1, sVar0);
    }
    if (fVar1 > 0f && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
    {
      func_585(uParam0, iVar2, fVar1);
    }
    else
    {
      func_586(uParam0, iVar2);
    }
    iVar2++;
  }
}