// theatre_ticket_taker.ysc @ L6750
void func_218(var uParam0)
{
  int iVar0;
  int iVar1;
  var uVar2[3];
  var uVar6[1];
  struct<10> Var8;

  uVar6[0] = uParam0->f_134;
  iVar0 = func_389(&uVar2, &uVar6, 3, Global_36, 50f, 0, 0, 0, func_388(uParam0->f_139), 1, 1, -1082130432 /* Float: -1f */, 0, 1);
  iVar1 = 0;
  while (iVar1 <= (iVar0 - 1))
  {
    if ((ENTITY::DOES_ENTITY_EXIST(uVar2[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uVar2[iVar1])) && !LAW::_0x40851BCC33ACD9AB(uVar2[iVar1]))
    {
      Var8 = Global_35;
      Var8.f_3 = { Global_36 };
      Var8.f_6 = func_390();
      Var8.f_9 = 1;
      Var8.f_2 = joaat("CRIME_THREATEN");
      Var8.f_1 = uVar2[iVar1];
      Var8.f_8 = 1;
      Var8.f_7 = 1000;
      LAW::_0x018F30D762E62DF8(uVar2[iVar1], &Var8);
      func_391(uVar2[iVar1], Global_36, 2, 1, 1);
      TASK::_TASK_SMART_FLEE_STYLE_PED(uVar2[iVar1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
    }
    iVar1++;
  }
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
}