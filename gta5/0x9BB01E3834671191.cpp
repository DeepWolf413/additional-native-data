// act_cinema.ysc @ L118085
void func_1154(var uParam0, bool bParam1)
{
  if (PED::IS_PED_INJURED(func_1098()))
  {
    return;
  }
  if (bParam1)
  {
    if (!PED::IS_PED_GROUP_MEMBER(func_1098(), func_1155()))
    {
      return;
    }
    if (!PED::IS_PED_INJURED(func_1097()))
    {
      if (!PED::IS_PED_GROUP_MEMBER(func_1097(), func_1155()))
      {
        return;
      }
    }
  }
  if (Global_95196 == 23)
  {
    Global_95198 = 10;
    Global_95196 = uParam0;
  }
}