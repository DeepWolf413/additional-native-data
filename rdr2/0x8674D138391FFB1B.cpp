// camp_beaverhollow.ysc @ L3177
void func_89()
{
  var uVar0;
  var uVar1;
  vector3 vVar2;
  int iVar5;
  int iVar6;

  if (PED::IS_PED_ON_MOUNT(Global_35))
  {
    TASK::TASK_DISMOUNT_ANIMAL(Global_35, 16, 0, 0, 0, 0);
  }
  PLAYER::_0x8674D138391FFB1B(PLAYER::GET_PLAYER_INDEX(), 1);
  vVar2 = { func_440(func_148(), &uVar0, &uVar1) };
  func_441(vVar2, uVar1, uVar0, 0);
  func_442(0);
  func_443();
  func_444(6);
  func_445(4096);
  Global_1310720.f_6 = 1;
  Global_1310720.f_17 = 8;
  iVar5 = 0;
  while (iVar5 < 27)
  {
    iVar6 = func_178(iVar5);
    if (ENTITY::DOES_ENTITY_EXIST(iVar6))
    {
      PED::_0x06D26A96CA1BCA75(iVar6, 1, 0f, 0);
    }
    iVar5++;
  }
  func_446();
}