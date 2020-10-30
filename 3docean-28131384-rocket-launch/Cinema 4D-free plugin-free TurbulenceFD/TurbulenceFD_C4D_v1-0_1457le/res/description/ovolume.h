#ifndef _Ovolume_H_
#define _Ovolume_H_

enum
{
    ID_PHYS_SCALE = 1001,
    ID_TIME_SCALE,
    ID_VORTICITY,
    ID_GRAVITY,
    ID_BUOYANCY,
    ID_BURN_MODEL,
    ID_BM_OXIDIZED,
    ID_BM_UNOXIDIZED,
    ID_BURN_RATE,
    ID_EXPANSION,
    ID_HEAT_CREATION,
    ID_TEMP_DIFFUSION,
    ID_TEMP_DECAY,
    ID_SOOT_CREATION,
    ID_DENS_DECAY,

    ID_SMOKE_VELOCITY_DISPLACEMENT,
    ID_SMOKE_COLOR,
    ID_SS_THICKNESS,
    ID_ALBEDO,
    ID_SCATTERING_ANISOTROPY,

    ID_GENERAL,
    ID_CACHE,
    ID_SIMULATION,
    ID_RENDERING,
    ID_NEW_CACHE,
    ID_OPEN_CACHE,
    ID_SAVE_CACHE,
    ID_CACHE_DIR,
    ID_RAM_CACHE_SIZE,
    ID_UPDATE_SIMULATION,
    ID_UPDATE_BEFORE_RENDERING,

    ID_COMPRESS,
    ID_VOLUME_DIM,
    ID_RESOLUTION,
    
    ID_RENDER_OBSTACLES,
    ID_PREVIEW_QUALITY,
    
    ID_FIRE_COLOR,
    ID_FIRE_TEMP,
    ID_IGNITION_TEMP,
    ID_BURN_DECAY,
    ID_SF_OPACITY,
    ID_FIRE_COLOR_SCALE,
    ID_RENDERING_GENERAL,
    ID_SHADERS_SMOKE,
    ID_SHADERS_FIRE,
    ID_SIMULATION_GENERAL,
    ID_SIMULATION_TEMPERATURE,
    ID_SIMULATION_SMOKE,
    ID_SIMULATION_FUEL,
    ID_BURN_RATE_VARIANCE,
    ID_BURN_RATE_NOISE_SCALE,

    ID_SIM_TYPE,
    ID_SIM_TYPE_DIV_FREE,
    ID_SIM_TYPE_DIV_CTRL,
    ID_SIM_STEP_SIZE,
    ID_REAC_DECAY,
    ID_SOOT_SCALE,

    ID_SIMULATION_FLAME,
    ID_BURN_RATE_CURV,
    ID_EXPANSION_SOURCE,
    ID_EXPANSION_FRONT,
    ID_SOOT_FUNCTION,
    ID_FUEL_DECAY,
    ID_FLAME_IGNITION_TEMP,
    ID_FLAME_CORE_COLOR,
    ID_FLAME_CORE_WIDTH,
    ID_FLAME_VORTICITY,
    ID_FLAME_VORTICITY_WIDTH,
    ID_FIRE_SCALE_DEPRECATED,
    ID_CUBIC_INTERPOLATION,
    ID_UPDATE_SIMULATION2,
    ID_UPDATE_SIMULATION3,
    
    ID_DIFFERENTIAL_DENSITY,
    ID_RUN_SIM_WHILE_RENDER,

    ID_BURN_RATE_C1,
    ID_BURN_RATE_C2,
    ID_BURN_RATE_C3,
    ID_BURN_RATE_C4,
    ID_BURN_RATE_MU_THETA,
    ID_BURN_RATE_C5_THETA_DX,

    ID_DSD_ORDER,
    ID_DSD_FIRST,
    ID_DSD_THIRD,
    
    ID_EDITOR_RENDERING,
    ID_EDITOR_RENDER_PREVIEW,
    ID_EDITOR_RENDER_SLICE,
    ID_EDITOR_SLICE_ORIENTATION,
    ID_EDITOR_SLICE_POSITION,
    ID_EDITOR_CHANNEL,
    ID_EDITOR_GRADIENT,
    ID_EDITOR_COLOR_SCALE,
    ID_SLICE_ORIENTATION_PERSPECTIVE,
    ID_SLICE_ORIENTATION_X,
    ID_SLICE_ORIENTATION_Y,
    ID_SLICE_ORIENTATION_Z,

    ID_CHANNEL_VEL,
    ID_CHANNEL_DENS,
    ID_CHANNEL_TEMP,
    ID_CHANNEL_FUEL,
    ID_CHANNEL_BURN,
    ID_CHANNEL_FLAME,
    ID_CHANNEL_FLAME_CURV,
    ID_CHANNEL_DET,
    ID_CHANNEL_REAC,

    ID_SAVE_CHANNELS,
    ID_SAVE_VEL,
    ID_SIM_DENS,
    ID_SIM_TEMP,
    ID_SIM_FUEL,
    ID_SIM_BURN,
    ID_SAVE_FLAME,
    ID_SAVE_DET,
    ID_SAVE_REAC,

    ID_FLAME_FIRE_TEMP,
    ID_RADIATION_COOLING,
    ID_FLAME_SOOT_CREATION,
    
    ID_START_TIME,
    ID_SIM_STATE_CLEAN,
    ID_SIM_STATE_FILE,
    ID_SIM_STATE_CONTINUE,
    
    ID_GRAVITY_DIRECTION,
    ID_BUOYANCY_DIRECTION,
    
    ID_ADAPTIVE_CONTAINER,
    
    ID_RENDER_FLAME_SURFACE,
    
    ID_SFCS_BLACKBODY_ADAPT_TEMP,
    ID_RENDER_MIN_TEMP_DEPRECATED,
    ID_SFCS_BLACKBODY_MAX_TEMP,
    ID_SFCS_BLACKBODY_ADAPT_SIGMA,

    ID_COMBUST_MODE,
    ID_BURN_RELATIVE,
    ID_BURN_ABSOLUTE,
    
    ID_DENS_DIFFUSION,
    
    ID_SHADERS,
    ID_SHADE_SMOKE,
    ID_SHADE_BLACKBODY,
    ID_SHADE_FUEL_DEPRECATED,
    ID_SHADE_FIRE,
    ID_SHADE_FLAME,
    
    ID_EDITOR_COLOR_FIT,
    ID_EDITOR_COLOR_MIN,
    ID_EDITOR_COLOR_MAX,
    
    ID_SHADERS_BLACKBODY,
    ID_SHADERS_FLAME,
    
    ID_CHANNEL_SOLID,
    
    ID_VELOCITY_NOISE,
    ID_VELNOISE_INTENSITY,
    ID_VELNOISE_FREQ,
    ID_VELNOISE_DETAIL,
    ID_VELNOISE_SPEED,
    ID_VELNOISE_OFFSET,
    
    ID_PARAMETER_VERSION,
    ID_TURBULENCE,

    ID_SSS_NOISE,
    ID_SSS_NOISE_INTENSITY,
    ID_SSS_NOISE_FREQ,
    ID_SSS_NOISE_DETAIL,
    ID_SSS_NOISE_SPEED,
    ID_SSS_NOISE_OFFSET,

    ID_RAM_CACHE_FRAMES,
    ID_REMOVE_CACHE,
    ID_CACHE_LIST,

    ID_SFCS_CHANNEL,
    ID_SHADERS_FIRE_COLOR_SOURCE,
    ID_SFCS_RANGE_START,
    ID_SFCS_RANGE_END,
    ID_SFCS_SOFT_START,
    ID_SFCS_SOFT_SUPR,
    ID_SFCS_CONTOUR_WIDTH,
    ID_SFCS_CONTOUR_SHARPNESS,

    ID_SFOS_CHANNEL,
    ID_SHADERS_FIRE_OPACITY_SOURCE,
    ID_SFOS_RANGE_START,
    ID_SFOS_RANGE_END,
    ID_SFOS_SOFT_START,
    ID_SFOS_SOFT_SUPR,
    ID_SFOS_CONTOUR_WIDTH,
    ID_SFOS_CONTOUR_SHARPNESS,

    ID_SF_COLOR_MODE,
    ID_SF_MODE_MANUAL,
    ID_SF_MODE_BLACKBODY,
    ID_SF_FIRE_CLEARS_SMOKE,
    ID_SF_OPACITY_SCALE,

    ID_SHADERS_FIRE_COLOR,
    ID_SHADERS_FIRE_OPACITY,

    ID_CHANNEL_NONE,

    ID_SSS_CHANNEL,
    ID_SHADERS_SMOKE_SOURCE,
    ID_SSS_RANGE_START,
    ID_SSS_RANGE_END,
    ID_SSS_SOFT_START,
    ID_SSS_SOFT_SUPR,
    ID_SSS_CONTOUR_WIDTH,
    ID_SSS_CONTOUR_SHARPNESS,

    ID_SSS_CONTOUR,
    ID_SSS_SOFTCLIP,

    ID_SFCS_CONTOUR,
    ID_SFCS_SOFTCLIP,

    ID_SFOS_CONTOUR,
    ID_SFOS_SOFTCLIP,

    ID_SFCS_INTENSITY,

    ID_SSS_INTENSITY,
    ID_SS_SCATTERING,
    ID_SS_SHADOW,
    ID_SS_BRIGHTNESS,

    ID_FUEL_SPEED,
    ID_FUEL_DIFFUSION,

    ID_INTERPOLATION,
    ID_INTERPOLATION_FAST,
    ID_INTERPOLATION_SMOOTH,
    ID_INTERPOLATION_SHARP,
    ID_INTERPOLATION_FASTSHARP,

    ID_CHANNEL_GRADIENTX,
    ID_CHANNEL_GRADIENTY,
    ID_CHANNEL_GRADIENTZ,
    ID_RESOLUTION_GROUP,
    ID_TIMING,
    ID_END_TIME,
    ID_RESOLUTION_INFO,
    ID_CELL_SIZE,

    ID_FIXED_RESOLUTION_PROPERTY,
    ID_RESOLUTION_FIX_PERFORMANCE,
    ID_RESOLUTION_FIX_QUALITY,

    ID_CACHE_INFO,
    ID_CACHE_INFO_FILENAME,
    ID_CACHE_INFO_RESOLUTION,
    ID_CACHE_INFO_SIM_TIME,
    ID_CACHE_INFO_DOC_TIME,
    ID_CACHE_INFO_VEL,
    ID_CACHE_INFO_DENS,
    ID_CACHE_INFO_TEMP,
    ID_CACHE_INFO_FUEL,
    ID_CACHE_INFO_BURN,
    ID_CACHE_INFO_AVAIL_CHANNELS,

    ID_SFCS_BLACKBODY_MIN_TEMP,

    ID_INTERPOLATION_CRMONO,
    ID_INTERPOLATION_CRMONO2,

    ID_EDITOR_COLOR_AUTOFIT,
    ID_RENDER_PROXIMITY,
    ID_RENDER_ALGO1,

    ID_CHANNEL_SOLID_VEL,
    ID_RAY_STEP,
    ID_VORTICITY_SPECTRUM,
    ID_VORTICITY_GROUP,
    ID_BURN_DIFFUSION,
    ID_VORTICITY_SMALLEST_ONLY,

    ID_WIND_GROUP,
    ID_WIND_DIRECTION,
    ID_WIND_SPEED,

    ID_LIMIT_VELOCITY,
    ID_FRAME_RANGE_MODE,
    ID_FRAME_RANGE_PREVIEW,
    ID_FRAME_RANGE_ALL,
    ID_FRAME_RANGE_CUSTOM,

    ID_SOLVER_GROUP,

    ID_SAVE_TEX,
    ID_CHANNEL_TEX,
    ID_CACHE_INFO_TEX,
    ID_MAX_SIM_STEPS,

    ID_SIMULATION_BURN,

    ID_PARTICLE_VELOCITY_SCALE,

    ID_VELNOISE_PERIOD,
    ID_VELOCITY_DAMP,
    ID_HQ_SOLVE,
    ID_VELOCITY_GROUP,
    ID_SFCS_BLACKBODY_GRADIENT,
    ID_SAVE_SOLID,

    ID_ADAPT_THRES_DENS,
    ID_ADAPT_THRES_TEMP,
    ID_ADAPT_THRES_FUEL,
    ID_ADAPT_THRES_BURN,

    ID_SSS_SMOOTHING,
    ID_SFCS_SMOOTHING,
    ID_SFOS_SMOOTHING,

    ID_VORTICITY_SUSTAIN,
    ID_VORTICITY_RELEASE,

    ID_FLUID_MOVES_WITH_CONTAINER,
    ID_MOTION_BLUR,
    ID_MOTION_BLUR_STEP,
    ID_FRAME_OFFSET,

    ID_LIGHTING_MODE,
    ID_LIGHTING_FAST,
    ID_LIGHTING_SMOOTH,
    ID_LIGHTING_ACCURATE,
    ID_LIGHTING_BRUTE,
    ID_LIGHTING_SUPERSAMPLE_DEPRECATED,
    ID_LIGHTING_ACCURATE_SUPERSAMPLE_DEPRECATED,

    ID_FIRE_MODE,
    ID_EXPANSION_MODE,
    ID_HEAT_CREATION_MODE,
    ID_SOOT_CREATION_MODE,
    ID_EMIT_MODE_ADD,
    ID_EMIT_MODE_SET,

    ID_BLACKBODY_TO_MANUAL,

    ID_CACHE_TEMP,
    ID_CACHE_DENS,
    ID_CACHE_FUEL,
    ID_CACHE_BURN,
    ID_CACHE_INFO_SOLID,

    ID_SFCS_BLACKBODY_WHITE_POINT,
    ID_SFCS_BLACKBODY_RED_SCALE,
    ID_SFCS_BLACKBODY_GREEN_SCALE,
    ID_SFCS_BLACKBODY_BLUE_SCALE,
    ID_SF_ALPHA_SCALE,

    ID_DENS_HALFLIFE,
    ID_TEMP_HALFLIFE,
    ID_BURN_HALFLIFE,

    ID_SOLID_BOUNDARIES,
    ID_SOLID_BND_NEGX,
    ID_SOLID_BND_POSX,
    ID_SOLID_BND_NEGY,
    ID_SOLID_BND_POSY,
    ID_SOLID_BND_NEGZ,
    ID_SOLID_BND_POSZ,

    ID_CHANNEL_DIV,
    ID_ADAPT_THRES_VEL,

    ID_SHOW_GRID,
    ID_GRID_OFF,
    ID_GRID_XY,
    ID_GRID_XZ,
    ID_GRID_YZ,

    ID_VELNOISE_INTENSITY_CHANNEL,
    ID_VELNOISE_INTENSITY_MAPPING,

    ID_RAY_STEP_ADAPTIVE_DEPRECATED,
    ID_SS_ABSORPTION,

    ID_GENERATE_TEXTURE_COORDINATES,
    ID_TEXTURE_COORDINATE_INTERVAL,
    ID_CHANNEL_TEXU,
    ID_CHANNEL_TEXV,
    ID_CHANNEL_TEXW,
    ID_CHANNEL_TEXU2,
    ID_CHANNEL_TEXV2,
    ID_CHANNEL_TEXW2,
    ID_SMOKE_NOISE_SHADER,
    ID_FIRE_NOISE_SHADER,

    ID_EDITOR_RENDER_MODE,
    ID_VIEWPORT_PREVIEW_NONE,
    ID_VIEWPORT_PREVIEW_PARTICLES,
    ID_VIEWPORT_PREVIEW_SLICE,
    ID_EDITOR_GRADIENT_PARTICLES,
    ID_VIEWPORT_PARTICLE_JITTER,
    ID_VIEWPORT_PARTICLE_SIZE,
    ID_VIEWPORT_GRID_REDUCTION,
    ID_VIEWPORT_PARTICLES_CHANNEL,

    ID_CONTAINER_GROUP,
    ID_VIEWPORT_PREVIEW_MULTISLICE,
    ID_VIEWPORT_SLICES_PER_VOXEL,
    ID_VIEWPORT_SLICES_OPACITY,
    ID_SLICE_ORIENTATION_MAJOR_AXIS,
    ID_SHOW_BBOXES,
    ID_EXTRAPOLATE_INTO_SOLID,

    ID_VIEWPORT_OPENGL_WARNING,
    ID_VIEWPORT_ACTIVATE_OPENGL,
    ID_VIEWPORT_LERP_TEXTURES,
    ID_EMITTER_STEPS,

    ID_LIGHTING_NONE,

    ID_VELNOISE_SMALLEST,
    ID_VELNOISE_LARGEST,
    ID_VELNOISE_SMALL_POWER,
    ID_FRAME_STEP,
    ID_ADV_STEP_SIZE,
    ID_SOLVER_ADVECTION_GROUP,
    ID_UPRES_GROUP,
    ID_UPRES_SCALE,
    ID_SAVE_MEMORY,
    ID_UPRES_TURBULENCE_STRENGTH,
    ID_UPRES_TURBULENCE_SMALL_POWER,

    ID_ILLUMINATION_RES,
    ID_RENDER_TRANSFORM,

    ID_FUELMASK_CHANNEL,
    ID_FUELMASK_MAPPING,
    ID_FUELMASK_SMOOTHING,

    ID_BURN_DECAY_MODE,
    ID_LINEAR,
    ID_EXPONENTIAL,
    ID_BURN_DECAY_LINEAR,
    ID_LOCK_CACHE,

    ID_MAX_VELOCITY_DISPLACEMENT,

    ID_SMOKE_SUBGRID_DETAIL,
    ID_SMOKE_SUBGRID_INTENSITY,
    ID_SMOKE_SUBGRID_SMALLEST,
    ID_SMOKE_SUBGRID_LARGEST,
    ID_SMOKE_SUBGRID_SMALL_POWER,

    ID_MULTISCATTER_ENABLED,
    ID_MULTISCATTER_DEPTH,
    ID_MULTISCATTER_DIRRES,
    ID_MULTISCATTER_SMOKE_BRIGHTNESS,
    ID_MULTISCATTER_FIRE_BRIGHTNESS,
    ID_MULTISCATTER_FALLOFF,

    ID_MAX_MEMORY,

    ID_FIRE_VELOCITY_DISPLACEMENT,
    ID_FIRE_SUBGRID_DETAIL,
    ID_FIRE_SUBGRID_INTENSITY,
    ID_FIRE_SUBGRID_SMALLEST,
    ID_FIRE_SUBGRID_LARGEST,
    ID_FIRE_SUBGRID_SMALL_POWER,

    ID_SMOKE_LIGHTING_GROUP,
    ID_RAY_EXT_STEP,

    ID_SHADERS_SMOKE_OPACITY,
    ID_SS_OPACITY_CHANNEL,
    ID_SS_OPACITY_SMOOTHING,
    ID_SS_OPACITY_MAPPING,

    ID_UPRES_SUPER_VOXEL_OCTAVES,
    ID_SFCS_BLACKBODY_DAMPING,

    ID_CHANNEL_VELU,
    ID_CHANNEL_VELV,
    ID_CHANNEL_VELW,

    ID_ADAPTIVE_TRACER,
    ID_USE_DIST_OPAQ_MAPPING,
    ID_DIST_OPAQ_MAPPING,

    ID_SMOKE_SUBGRID_PERIOD,
    ID_FIRE_SUBGRID_PERIOD,

    ID_SOLIDS_ENLARGE_CONTAINER,
    ID_SHADERS_SMOKE_COLOR,
    ID_SHADERS_SMOKE_MAPPING,
    ID_SHADERS_FIRE_MAPPING,

    ID_PREVIEW_SHADER,
    ID_PRM_NONE,
    ID_PRM_FIRE_SHADER,
    ID_PRM_SMOKE_SHADER,
    ID_PREVIEW_USE_SHADER_COLOR,

    ID_VORTICITY_INTENSITY_CHANNEL,
    ID_VORTICITY_INTENSITY_MAPPING,

    ID_ADVECT_METHOD_VEL,
    ID_ADVECT_METHOD_CHAN,
    ID_ADVECT_METHOD_2NDORDER,
    ID_ADVECT_METHOD_1STORDER,
    ID_SOLVER_MISC_GROUP,

    ID_MAX_PRESSURE_ITERATIONS,

    ID_GRID_OFFSET,

    ID_ADVECT_METHOD_FINVOL,
};

#endif
