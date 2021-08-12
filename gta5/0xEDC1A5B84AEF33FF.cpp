// armenian2.ysc @ L58157
int func_457(int iParam0, struct<3> Param1, bool bParam4, float fParam5)
{
  var uVar0;
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Param1, 5f, iParam0, false))
  {
    if (fParam5 != -2f)
    {
      OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, bParam4, fParam5, false);
      OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &iVar3, &fVar2);
      if (iVar3 == bParam4 && fVar2 == fParam5)
      {
        return 1;
      }
    }
    else
    {
      OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, &uVar0, &fVar1);
      OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, Param1, bParam4, fVar1, false);
      return 1;
    }
  }
  return 0;
}