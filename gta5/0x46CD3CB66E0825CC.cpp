// appmpjoblistnew.ysc @ L11984
void func_209(char* sParam0, var uParam1, int iParam2, struct<3> Param3, struct<3> Param6)
{
  if (*iParam2 == 0)
  {
    return;
  }
  if (DATAFILE::DATADICT_GET_TYPE(*iParam2, sParam0) == 5)
  {
    *uParam1 = { DATAFILE::DATADICT_GET_VECTOR(*iParam2, sParam0) };
  }
  else if (func_75())
  {
    if (!func_89(Param6))
    {
      *uParam1 = { Param6 };
    }
  }
  else
  {
    *uParam1 = { Param3 };
  }
}