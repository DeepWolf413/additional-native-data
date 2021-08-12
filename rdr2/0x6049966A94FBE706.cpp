// homeinvasion.ysc @ L80968
void func_2605(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6)
{
  vector3 vVar0;
  int iVar3;
  vector3 vVar4;
  vector3 vVar7;
  int iVar10;

  if (iParam6 == 1 && !MAP::DOES_BLIP_EXIST(*iParam0))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
    iVar3 = BUILTIN::FLOOR(ENTITY::GET_ENTITY_HEADING(iParam1));
    func_1600(vVar0, iParam0, iParam3, 0, iParam2, 0);
    MAP::SET_BLIP_ROTATION(*iParam0, iVar3);
    if (iParam4 != 0)
    {
      MAP::_BLIP_SET_MODIFIER(*iParam0, iParam4);
    }
  }
  if (MAP::DOES_BLIP_EXIST(*iParam0))
  {
    vVar4 = { MAP::GET_BLIP_COORDS(*iParam0) };
    vVar7 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
    iVar10 = BUILTIN::FLOOR(ENTITY::GET_ENTITY_HEADING(iParam1));
    vVar4.x = (vVar4.x + ((vVar7.x - vVar4.x) / fParam5));
    vVar4.f_1 = (vVar4.y + ((vVar7.y - vVar4.y) / fParam5));
    vVar4.f_2 = (vVar4.z + ((vVar7.z - vVar4.z) / fParam5));
    MAP::SET_BLIP_ROTATION(*iParam0, iVar10);
    MAP::SET_BLIP_COORDS(*iParam0, vVar4);
  }
}