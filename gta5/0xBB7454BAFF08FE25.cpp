// am_casino_peds.ysc @ L309765
int func_4283(int iParam0, int* iParam1)
{
  int iVar0;
  struct<3> Var1;
  float fVar4;
  
  func_4316(iParam0);
  if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
    func_1123(&iVar0, &(iParam1->f_109), 12);
    func_4312(iParam0, &(iParam1->f_109));
  }
  func_4287(iParam0, Global_1590749, &(iParam1->f_175[3]), &(iParam1->f_175[0]), &(iParam1->f_175[1]), &(iParam1->f_175[2]), &(iParam1->f_175[4]), 0);
  if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_175[3]))
  {
    OBJECT::DELETE_OBJECT(&(iParam1->f_175[3]));
  }
  Var1 = { func_4286(iParam0) };
  STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
  fVar4 = 2f;
  func_4284(iParam0, &(iParam1->f_175[1]), &(iParam1->f_175[2]), &fVar4);
  func_2527(iParam1, 0);
  iParam1->f_187 = 0;
  return 1;
}