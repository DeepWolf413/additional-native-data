// braithwaites2.ysc @ L71205
void func_1837(bool bParam0, var uParam1)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
  {
    return;
  }
  if (uParam1->f_503 <= 0)
  {
    return;
  }
  if (uParam1->f_1 <= 0f)
  {
    return;
  }
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 <= uParam1->f_503)
  {
    if (MAP::DOES_BLIP_EXIST(uParam1->f_2[iVar0]))
    {
      if (func_1268(bParam0, MAP::GET_BLIP_COORDS(uParam1->f_2[iVar0]), 1) < uParam1->f_1)
      {
        func_169(&(uParam1->f_2[iVar0]));
      }
    }
    iVar0++;
  }
}