// rural_bank_setup.ysc @ L21724
void func_349(int iParam0, struct<3> Param1, struct<3> Param4, var uParam7, float fParam8, float fParam9)
{
  var uVar0[4];
  
  ENTITY::SET_ENTITY_COORDS(iParam0, func_350(Param1, Param4, *fParam9), true, false, false, true);
  MISC::SLERP_NEAR_QUATERNION(*fParam9, (*uParam7)[0], (*uParam7)[1], (*uParam7)[2], (*uParam7)[3], (*fParam8)[0], (*fParam8)[1], (*fParam8)[2], (*fParam8)[3], &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]));
  ENTITY::SET_ENTITY_QUATERNION(iParam0, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
}