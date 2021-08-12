// aberdeenpigfarm.ysc @ L846
bool func_41()
{
  var uVar0;
  var uVar1;
  float fVar2;
  int iVar3;

  MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
  if (fVar2 < 0.75f)
  {
    iVar3 = uVar0;
  }
  else
  {
    iVar3 = uVar1;
  }
  if (func_80(iVar3))
  {
    return true;
  }
  return false;
}