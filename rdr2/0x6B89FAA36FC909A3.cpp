// bounty1.ysc @ L84117
int func_2580(int iParam0, var uParam1)
{
  var uVar0;
  var uVar1;
  var uVar2;
  var uVar3;
  var uVar4;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
  {
    return 0;
  }
  func_2420(iParam0, &uVar1, &uVar2, &uVar0, &uVar3);
  uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, uVar0, uVar1);
  return uVar4;
}