// mob4.ysc @ L53365
void func_1344(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, float fParam17)
{
  vector3 vVar0;
  float fVar3;

  vVar0 = { func_1832(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0, 0, 1036831949 /* Float: 0.1f */) };
  fVar3 = (vVar0.z - fParam17);
  PED::_0xA90684ED185CCB4B(iParam0, 1, fVar3, 1f);
}