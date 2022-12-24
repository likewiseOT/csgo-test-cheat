#include "memory.h"
#include "vector.h"

#include <thread>

namespace offset
{
	//offsets
	constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
	constexpr ::std::ptrdiff_t m_ArmorValue = 0x117CC;
	constexpr ::std::ptrdiff_t m_Collision = 0x320;
	constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
	constexpr ::std::ptrdiff_t m_Local = 0x2FCC;
	constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31D4;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31D0;
	constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1328;
	constexpr ::std::ptrdiff_t m_SurvivalRules = 0xD00;
	constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x303C;
	constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3048;
	constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0x117D0;
	constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0x117D4;
	constexpr ::std::ptrdiff_t m_bBombDefused = 0x29C0;
	constexpr ::std::ptrdiff_t m_bBombPlanted = 0x9A5;
	constexpr ::std::ptrdiff_t m_bBombTicking = 0x2990;
	constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
	constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x9990;
	constexpr ::std::ptrdiff_t m_bHasDefuser = 0x117DC;
	constexpr ::std::ptrdiff_t m_bHasHelmet = 0x117C0;
	constexpr ::std::ptrdiff_t m_bInReload = 0x32B5;
	constexpr ::std::ptrdiff_t m_bIsDefusing = 0x997C;
	constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
	constexpr ::std::ptrdiff_t m_bIsScoped = 0x9974;
	constexpr ::std::ptrdiff_t m_bIsValveDS = 0x7C;
	constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
	constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
	constexpr ::std::ptrdiff_t m_bStartedArming = 0x3400;
	constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMax = 0x9D9;
	constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMin = 0x9D8;
	constexpr ::std::ptrdiff_t m_bUseCustomBloomScale = 0x9DA;
	constexpr ::std::ptrdiff_t m_clrRender = 0x70;
	constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
	constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3340;
	constexpr ::std::ptrdiff_t m_fFlags = 0x104;
	constexpr ::std::ptrdiff_t m_flC4Blow = 0x29A0;
	constexpr ::std::ptrdiff_t m_flCustomAutoExposureMax = 0x9E0;
	constexpr ::std::ptrdiff_t m_flCustomAutoExposureMin = 0x9DC;
	constexpr ::std::ptrdiff_t m_flCustomBloomScale = 0x9E4;
	constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29BC;
	constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29B8;
	constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31E0;
	constexpr ::std::ptrdiff_t m_flFlashDuration = 0x10470;
	constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0x1046C;
	constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2928;
	constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x9ADC;
	constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D80;
	constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3248;
	constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
	constexpr ::std::ptrdiff_t m_flTimerLength = 0x29A4;
	constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2F08;
	constexpr ::std::ptrdiff_t m_hBombDefuser = 0x29C4;
	constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2E08;
	constexpr ::std::ptrdiff_t m_hObserverTarget = 0x339C;
	constexpr ::std::ptrdiff_t m_hOwner = 0x29DC;
	constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
	constexpr ::std::ptrdiff_t m_hViewModel = 0x3308;
	constexpr ::std::ptrdiff_t m_iAccountID = 0x2FD8;
	constexpr ::std::ptrdiff_t m_iClip1 = 0x3274;
	constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
	constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
	constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11838;
	constexpr ::std::ptrdiff_t m_iDefaultFOV = 0x333C;
	constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FBC;
	constexpr ::std::ptrdiff_t m_iFOV = 0x31F4;
	constexpr ::std::ptrdiff_t m_iFOVStart = 0x31F8;
	constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;
	constexpr ::std::ptrdiff_t m_iHealth = 0x100;
	constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
	constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FD0;
	constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
	constexpr ::std::ptrdiff_t m_iObserverMode = 0x3388;
	constexpr ::std::ptrdiff_t m_iShotsFired = 0x103E0;
	constexpr ::std::ptrdiff_t m_iState = 0x3268;
	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
	constexpr ::std::ptrdiff_t m_nBombSite = 0x2994;
	constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31D8;
	constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31DC;
	constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31E4;
	constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
	constexpr ::std::ptrdiff_t m_nModelIndex = 0x258;
	constexpr ::std::ptrdiff_t m_nTickBase = 0x3440;
	constexpr ::std::ptrdiff_t m_nViewModelIndex = 0x29D0;
	constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
	constexpr ::std::ptrdiff_t m_szCustomName = 0x304C;
	constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35C4;
	constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31E8;
	constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
	constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
	constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
	constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3030;
	constexpr ::std::ptrdiff_t m_zoomLevel = 0x33E0;

	// signatures
	constexpr ::std::ptrdiff_t anim_overlays = 0x2990;
	constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D30;
	constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
	constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
	constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
	constexpr ::std::ptrdiff_t convar_name_hash_table = 0x301A0;
	constexpr ::std::ptrdiff_t dwClientState = 0x59F194;
	constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
	constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D48;
	constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
	constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
	constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
	constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
	constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
	constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4DFFF14;
	constexpr ::std::ptrdiff_t dwForceAttack = 0x322DD10;
	constexpr ::std::ptrdiff_t dwForceAttack2 = 0x322DD1C;
	constexpr ::std::ptrdiff_t dwForceBackward = 0x322DD40;
	constexpr ::std::ptrdiff_t dwForceForward = 0x322DD34;
	constexpr ::std::ptrdiff_t dwForceJump = 0x52BBC9C;
	constexpr ::std::ptrdiff_t dwForceLeft = 0x322DD4C;
	constexpr ::std::ptrdiff_t dwForceRight = 0x322DD58;
	constexpr ::std::ptrdiff_t dwGameDir = 0x63AD80;
	constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x532F4CC;
	constexpr ::std::ptrdiff_t dwGetAllClasses = 0xE0BFDC;
	constexpr ::std::ptrdiff_t dwGlobalVars = 0x59EE58;
	constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x535A9D8;
	constexpr ::std::ptrdiff_t dwInput = 0x525D4E8;
	constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x99BC84;
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDEA964;
	constexpr ::std::ptrdiff_t dwMouseEnable = 0x5239148;
	constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0x5239118;
	constexpr ::std::ptrdiff_t dwPlayerResource = 0x322C0C0;
	constexpr ::std::ptrdiff_t dwRadarBase = 0x52369EC;
	constexpr ::std::ptrdiff_t dwSensitivity = 0xDEEB80;
	constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xDEEB80;
	constexpr ::std::ptrdiff_t dwSetClanTag = 0x8DA80;
	constexpr ::std::ptrdiff_t dwViewMatrix = 0x4DF0D44;
	constexpr ::std::ptrdiff_t dwWeaponTable = 0x525E5C4;
	constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x326C;
	constexpr ::std::ptrdiff_t dwYawPtr = 0xDEE910;
	constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xDF4380;
	constexpr ::std::ptrdiff_t dwbSendPackets = 0xDD072;
	constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA62C0;
	constexpr ::std::ptrdiff_t find_hud_element = 0x2716FBD0;
	constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x3D91CA;
	constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3FA9C;
	constexpr ::std::ptrdiff_t is_c4_owner = 0x3E69E0;
	constexpr ::std::ptrdiff_t m_bDormant = 0xED;
	constexpr ::std::ptrdiff_t m_bIsLocalPlayer = 0x3628;
	constexpr ::std::ptrdiff_t m_flSpawnTime = 0x103C0;
	constexpr ::std::ptrdiff_t m_pStudioHdr = 0x2950;
	constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x5239040;
	constexpr ::std::ptrdiff_t m_yawClassPtr = 0xDEE910;
	constexpr ::std::ptrdiff_t model_ambient_min = 0x5A118C;
	constexpr ::std::ptrdiff_t set_abs_angles = 0x1E72D0;
	constexpr ::std::ptrdiff_t set_abs_origin = 0x1E7110;
}

constexpr Vector3 CalculateAngle(
	const Vector3& localPosition,
	const Vector3& enemyPosition,
	const Vector3& viewAngles) noexcept
{
	return ((enemyPosition - localPosition).ToAngle() - viewAngles);
}

int main()
{
	// initialize memory class
	const auto memory = Memory{ "csgo.exe" };

	// module addresses
	const auto client = memory.GetModuleAddress("client.dll");
	const auto engine = memory.GetModuleAddress("engine.dll");

	// infinite hack loop
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1));

		// get local player
		const auto localPlayer = memory.Read<std::uintptr_t>(client + offset::dwLocalPlayer);
		const auto localTeam = memory.Read<std::int32_t>(localPlayer + offset::m_iTeamNum);

		// get glowObjectManager
		const auto glowObjectManager = memory.Read<std::uintptr_t>(client + offset::dwGlowObjectManager);

		for (auto i = 0; i < 64; ++i) {
			const auto entity = memory.Read<std::uintptr_t>(client + offset::dwEntityList + i * 0x10);

			if (memory.Read<std::uintptr_t>(entity + offset::m_iTeamNum) == memory.Read<std::uintptr_t>(localPlayer + offset::m_iTeamNum))
				continue;

			const auto glowIndex = memory.Read<std::int32_t>(entity + offset::m_iGlowIndex);

			memory.Write<float>(glowObjectManager + (glowIndex + 0x38) + 0x8, 1.f); // r
			memory.Write<float>(glowObjectManager + (glowIndex + 0x38) + 0xC, 0.f); // g
			memory.Write<float>(glowObjectManager + (glowIndex + 0x38) + 0x10, 0.f); // b
			memory.Write<float>(glowObjectManager + (glowIndex + 0x38) + 0x14, 1.f); // a

			memory.Write<bool>(glowObjectManager + (glowIndex * 0x38) + 0x27, true);
			memory.Write<bool>(glowObjectManager + (glowIndex * 0x38) + 0x28, true);
		}

		// aimbot key
		if (!GetAsyncKeyState(VK_RBUTTON))
			continue;

		// eye position = origin + viewOffset
		const auto localEyePosition = memory.Read<Vector3>(localPlayer + offset::m_vecOrigin) +
			memory.Read<Vector3>(localPlayer + offset::m_vecViewOffset);

		const auto clientState = memory.Read<std::uintptr_t>(engine + offset::dwClientState);

		const auto localPlayerId =
			memory.Read<std::int32_t>(clientState + offset::dwClientState_GetLocalPlayer);

		const auto viewAngles = memory.Read<Vector3>(clientState + offset::dwClientState_ViewAngles);
		const auto aimPunch = memory.Read<Vector3>(localPlayer + offset::m_aimPunchAngle) * 2;

		// aimbot fov
		auto bestFov = 50.f;
		auto bestAngle = Vector3{ };

		for (auto i = 1; i <= 32; ++i)
		{
			const auto player = memory.Read<std::uintptr_t>(client + offset::dwEntityList + i * 0x10);

			if (memory.Read<std::int32_t>(player + offset::m_iTeamNum) == localTeam)
				continue;

			if (memory.Read<bool>(player + offset::m_bDormant))
				continue;

			if (memory.Read<std::int32_t>(player + offset::m_lifeState))
				continue;

			if (memory.Read<std::int32_t>(player + offset::m_bSpottedByMask) & (1 << localPlayerId))
			{
				const auto boneMatrix = memory.Read<std::uintptr_t>(player + offset::m_dwBoneMatrix);

				// pos of player head in 3d space
				// 8 is the head bone index :)
				const auto playerHeadPosition = Vector3{
					memory.Read<float>(boneMatrix + 0x30 * 8 + 0x0C),
					memory.Read<float>(boneMatrix + 0x30 * 8 + 0x1C),
					memory.Read<float>(boneMatrix + 0x30 * 8 + 0x2C)
				};

				const auto angle = CalculateAngle(
					localEyePosition,
					playerHeadPosition,
					viewAngles + aimPunch
				);

				const auto fov = std::hypot(angle.x, angle.y);

				if (fov < bestFov)
				{
					bestFov = fov;
					bestAngle = angle;
				}
			}
		}

		// if we have a best angle, do aimbot
		if (!bestAngle.IsZero())
			memory.Write<Vector3>(clientState + offset::dwClientState_ViewAngles, viewAngles + bestAngle / 3.f); // smoothing
	}

	return 0;
}